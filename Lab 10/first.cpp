#include <iostream>
#include <string>

class CellPhone {
protected:
    std::string modelNumber;
    std::string manufacturer;
    double screenSize;
    bool isTouchPhone;
    bool is3GEnabled;
    bool hasCamera;

public:
    void displayInfo() {
        std::cout << "Cell Phone Details:" << std::endl;
        std::cout << "Model Number: " << modelNumber << std::endl;
        std::cout << "Manufacturer: " << << manufacturer << std::endl;
        std::cout << "Screen Size: " << screenSize << " inches" << std::endl;
        std::cout << "Touch Phone: " << (isTouchPhone ? "Yes" : "No") << std::endl;
        std::cout << "3G Enabled: " << (is3GEnabled ? "Yes" : "No") << std::endl;
        std::cout << "Has Camera: " << (hasCamera ? "Yes" : "No") << std::endl;
    }

    void setInfo(std::string model, std::string manuf, double size, bool isTouch, bool is3G, bool hasCam) {
        modelNumber = model;
        manufacturer = manuf;
        screenSize = size;
        isTouchPhone = isTouch;
        is3GEnabled = is3G;
        hasCamera = hasCam;
    }

    void makeCall(int number) {
        std::cout << "Calling " << number << "..." << std::endl;
    }

    void sendSMS(int number, std::string message) {
        std::cout << "Sending SMS to " << number << ": " << message << std::endl;
    }
};

class Nokia : public CellPhone {
private:
    bool hasMMSSupport;

public:
    Nokia(bool mmsSupport) {
        hasMMSSupport = mmsSupport;
    }

    void sendMMS(int number, std::string message) {
        if (hasMMSSupport) {
            std::cout << "Sending MMS to " << number << ": " << message << std::endl;
        } else {
            std::cout << "This Nokia model does not support sending MMS." << std::endl;
       }
    }
};

class Samsung : public CellPhone {
private:
    // Additional attributes or functions specific to Samsung can be added here
};

class Sony : public CellPhone {
private:
    // Additional attributes or functions specific to Sony can be added here
};

int main() {
    Nokia nokia(true);
    nokia.setInfo("1234", "Nokia", 5.5, true, true, true);

    nokia.displayInfo();
    nokia.makeCall(987654321);
    nokia.sendSMS(987654321, "Hello");
    nokia.sendMMS(987654321, "Check this out!");

    return 0;
}


