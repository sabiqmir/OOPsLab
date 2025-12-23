#include <iostream>
#include <vector>
#include <string>
using namespace std;

class MediaFile {
protected:
    std::string filename;
public:
    MediaFile(const string& name) : filename(name) {}
    virtual void play() const = 0;
    virtual ~MediaFile() {}
};

class Audio : public MediaFile {
public:
    Audio(const string& name) : MediaFile(name) {}
    void play() const override {
        cout << "Playing Audio File: " << filename << " (Sound output)" << endl;
    }
};

class Video : public MediaFile {
public:
    Video(const string& name) : MediaFile(name) {}
    void play() const override {
        cout << "Playing Video File: " << filename << " (Screen and Sound output)" << endl;
    }
};

class Image : public MediaFile {
public:
    Image(const string& name) : MediaFile(name) {}
    void play() const override {
        cout << "Displaying Image File: " << filename << " (Screen output)" << endl;
    }
};

int main() {
    vector<MediaFile*> playlist;
    playlist.push_back(new Audio("song.mp3"));
    playlist.push_back(new Video("movie.mp4"));
    playlist.push_back(new Image("photo.jpg"));

    for (const auto& media : playlist) {
        media->play();
    }

    for (auto& media : playlist) {
        delete media;
    }
    return 0;
}
