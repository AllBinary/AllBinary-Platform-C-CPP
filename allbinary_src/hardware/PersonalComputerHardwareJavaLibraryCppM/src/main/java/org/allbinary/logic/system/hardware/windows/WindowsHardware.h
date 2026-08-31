
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

            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <java/util/Vector.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/ComponentFactory.h>

      
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

      
#include <org/allbinary/string/CommonSeps.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class WindowsHardware
            : public Object
        : public HardwareInterface {
        

    private: componentInterfaceVector: Vector;

    private: videoInterfaceVector: Vector;

    private: hardDriveControllerInterfaceVector: Vector;

    private: cpuInterfaceVector: Vector;

    private: usbInterfaceVector: Vector;

    private: ethernetInterfaceVector: Vector;

    private: multimediaInterfaceVector: Vector;

    private: fireWireInterfaceVector: Vector;

    private: bridgeInterfaceVector: Vector;

    private: hardDriveInterfaceVector: Vector;

    private: macInterfaceVector: Vector;

    private: monitorInterfaceVector: Vector;

    private: const NAME: string = "Windows Hardware Profile";

    private: const MINHARDWARE: int32_t = 0;

    private: const componentFactory: ComponentFactory = ComponentFactory.getInstance()!;

public constructor ();

    string getComponentType(string component);

    public MediaInterface getMultimedia(int32_t index);

    public BridgeInterface getBridge(int32_t index);

    public CpuInterface getCpu(int32_t index);

    public EthernetInterface getEthernet(int32_t index);

    public FireWireInterface getFireWire(int32_t index);

    public HardDriveControllerInterface getHardDriveController(int32_t index);

    public HardDriveInterface getHardDrive(int32_t index);

    public MachineAccessControlAddressInterface getMachineAccessControlAddress(int32_t index);

    public MonitorInterface getMonitor(int32_t index);

    public UsbInterface getUsb(int32_t index);

    public VideoInterface getVideo(int32_t index);

    public HardwareComponentInterface getComponent(int32_t index);

    public string toString();

    public bool compareTo(HardwareInterface hardwareInterface);

    public Hashtable<any, any> difference(HardwareInterface hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_H
