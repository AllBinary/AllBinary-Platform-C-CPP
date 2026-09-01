
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_H

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/BridgeInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/EthernetInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/FireWireInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveControllerInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardDriveInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MachineAccessControlAddressInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MediaInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/MonitorInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/UsbInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/VideoInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/linux/Cpu.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PCComponentFactory.h"

class LinuxHardware
            : public Object
        : public HardwareInterface {

    private: static const std::string PCIFILE = "/proc/pci";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: Vector componentInterfaceVector;

    private: Vector videoInterfaceVector;

    private: Vector hardDriveControllerInterfaceVector;

    private: Vector cpuInterfaceVector;

    private: Vector usbInterfaceVector;

    private: Vector ethernetInterfaceVector;

    private: Vector multimediaInterfaceVector;

    private: Vector fireWireInterfaceVector;

    private: Vector bridgeInterfaceVector;

    private: Vector hardDriveInterfaceVector;

    private: Vector macInterfaceVector;

    private: Vector monitorInterfaceVector;

    private: const std::string NAME = "Linux Hardware Profile";

    private: const int32_t MINHARDWARE = 5;

public: LinuxHardware(std::string path);

public: LinuxHardware();

                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath);

                //@Throws(Exception.constructor)
            
    private: void init(LineNumberReader lineNumberReader, std::string filePath);

    public: MediaInterface getMultimedia(int32_t index);

    public: BridgeInterface getBridge(int32_t index);

    public: CpuInterface getCpu(int32_t index);

    public: EthernetInterface getEthernet(int32_t index);

    public: FireWireInterface getFireWire(int32_t index);

    public: HardDriveControllerInterface getHardDriveController(int32_t index);

    public: HardDriveInterface getHardDrive(int32_t index);

    public: MachineAccessControlAddressInterface getMachineAccessControlAddress(int32_t index);

    public: MonitorInterface getMonitor(int32_t index);

    public: UsbInterface getUsb(int32_t index);

    public: VideoInterface getVideo(int32_t index);

    public: HardwareComponentInterface getComponent(int32_t index);

    public: std::string toString();

    public: bool compareTo(HardwareInterface hardwareInterface);

    public: Hashtable<any, any> difference(HardwareInterface hardwareInterface);

    public: bool isNextHardware(std::string nextLine);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_H
