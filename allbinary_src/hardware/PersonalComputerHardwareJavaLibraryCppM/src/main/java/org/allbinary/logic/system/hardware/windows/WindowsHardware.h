
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListD;
class StdUtil;
class StringMaker;
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>
class ComponentFactory;
class BridgeInterface;
class CpuInterface;
class EthernetInterface;
class FireWireInterface;
class HardDriveControllerInterface;
class HardDriveInterface;
class HardwareComponentInterface;
class MachineAccessControlAddressInterface;
class MediaInterface;
class MonitorInterface;
class UsbInterface;
class VideoInterface;
class CommonSeps;
template<typename T1, typename T2> class ABHashtable;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class WindowsHardware
            : public virtual Object
        , public HardwareInterface {

    private: BasicArrayList* componentInterfaceVector;

    private: BasicArrayList* videoInterfaceVector;

    private: BasicArrayList* hardDriveControllerInterfaceVector;

    private: BasicArrayList* cpuInterfaceVector;

    private: BasicArrayList* usbInterfaceVector;

    private: BasicArrayList* ethernetInterfaceVector;

    private: BasicArrayList* multimediaInterfaceVector;

    private: BasicArrayList* fireWireInterfaceVector;

    private: BasicArrayList* bridgeInterfaceVector;

    private: BasicArrayList* hardDriveInterfaceVector;

    private: BasicArrayList* macInterfaceVector;

    private: BasicArrayList* monitorInterfaceVector;

    private: const std::string NAME = "Windows Hardware Profile";

    private: const int32_t MINHARDWARE = 0;

    private: ComponentFactory* componentFactory;

public: WindowsHardware();

    private: std::string getComponentType(std::string component);

    public: MediaInterface* getMultimedia(int32_t index);

    public: BridgeInterface* getBridge(int32_t index);

    public: CpuInterface* getCpu(int32_t index);

    public: EthernetInterface* getEthernet(int32_t index);

    public: FireWireInterface* getFireWire(int32_t index);

    public: HardDriveControllerInterface* getHardDriveController(int32_t index);

    public: HardDriveInterface* getHardDrive(int32_t index);

    public: MachineAccessControlAddressInterface* getMachineAccessControlAddress(int32_t index);

    public: MonitorInterface* getMonitor(int32_t index);

    public: UsbInterface* getUsb(int32_t index);

    public: VideoInterface* getVideo(int32_t index);

    public: HardwareComponentInterface* getComponent(int32_t index);

    public: std::string toString();

    public: bool compareTo(HardwareInterface* hardwareInterface);

    public: ABHashtable<Object*, Object*>* difference(HardwareInterface* hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/HardwareInterface.h>)
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/ComponentFactory.h>)
#include <org/allbinary/logic/system/hardware/components/ComponentFactory.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif

        #endif
    
