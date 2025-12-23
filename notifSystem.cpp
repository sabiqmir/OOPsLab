#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Notification {
protected:
    string message;
public:
    Notification(const string& msg) : message(msg) {}
    virtual void send() {
        cout << "Base notification sent: " << message << endl;
    }
    virtual ~Notification() {}
};

class EmailNotification : public Notification {
public:
    EmailNotification(const string& msg) : Notification(msg) {}
    void send() {
        cout << "Email Sent: " << message << " (Via SMTP server)" << endl;
    }
};

class SMSNotification : public Notification {
public:
    SMSNotification(const string& msg) : Notification(msg) {}
    void send() {
        cout << "SMS Sent: " << message << " (Via carrier network)" << endl;
    }
};

class AppNotification : public Notification {
public:
    AppNotification(const string& msg) : Notification(msg) {}
    void send() {
        cout << "App Push Notification Sent: " << message << " (Instant delivery)" << endl;
    }
};

int main() {
    vector<Notification*> notifications;
    notifications.push_back(new EmailNotification("System update alert."));
    notifications.push_back(new SMSNotification("Your OTP is 123456."));
    notifications.push_back(new AppNotification("New message received."));

    for (const auto& notif : notifications) {
        notif->send();
    }

    for (auto& notif : notifications) {
        delete notif;
    }
    return 0;
}
