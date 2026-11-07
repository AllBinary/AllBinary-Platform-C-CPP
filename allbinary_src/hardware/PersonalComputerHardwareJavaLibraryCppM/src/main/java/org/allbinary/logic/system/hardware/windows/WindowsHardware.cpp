
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/windows/WindowsHardware.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        

WindowsHardware::WindowsHardware() : componentFactory(ComponentFactory::getInstance()){

        try {
            this->componentInterfaceVector= new BasicArrayListD();
    
this->videoInterfaceVector= new BasicArrayListD();
    
this->hardDriveControllerInterfaceVector= new BasicArrayListD();
    
this->cpuInterfaceVector= new BasicArrayListD();
    
this->usbInterfaceVector= new BasicArrayListD();
    
this->ethernetInterfaceVector= new BasicArrayListD();
    
this->multimediaInterfaceVector= new BasicArrayListD();
    
this->fireWireInterfaceVector= new BasicArrayListD();
    
this->bridgeInterfaceVector= new BasicArrayListD();
    
this->hardDriveInterfaceVector= new BasicArrayListD();
    
this->macInterfaceVector= new BasicArrayListD();
    
this->monitorInterfaceVector= new BasicArrayListD();
    

                        if(this->componentInterfaceVector->size() < this->MINHARDWARE)
                        
                                    throw Exception("Not Enough Data For A Valid License On Windows");
                                

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    auto WindowsHardware::getComponentType(std::string component) -> std::string{

                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->ETHERNET)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->ETHERNET);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->BRIDGE)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->BRIDGE);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->IDE)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->IDE);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->MULTIMEDIA)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->MULTIMEDIA);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->SCSI)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->SCSI);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->USB)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->USB);;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, JavaString::valueOf(this->componentFactory->VGA)) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(this->componentFactory->VGA);;
    

                                    }
                                
                             else 
                        if()
                        
}


    auto WindowsHardware::getMultimedia(int32_t index) -> MediaInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MediaInterface*>(this->multimediaInterfaceVector->get(index));
    
}


    auto WindowsHardware::getBridge(int32_t index) -> BridgeInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BridgeInterface*>(this->bridgeInterfaceVector->get(index));
    
}


    auto WindowsHardware::getCpu(int32_t index) -> CpuInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CpuInterface*>(this->cpuInterfaceVector->get(index));
    
}


    auto WindowsHardware::getEthernet(int32_t index) -> EthernetInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<EthernetInterface*>(this->ethernetInterfaceVector->get(index));
    
}


    auto WindowsHardware::getFireWire(int32_t index) -> FireWireInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<FireWireInterface*>(this->fireWireInterfaceVector->get(index));
    
}


    auto WindowsHardware::getHardDriveController(int32_t index) -> HardDriveControllerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardDriveControllerInterface*>(this->hardDriveControllerInterfaceVector->get(index));
    
}


    auto WindowsHardware::getHardDrive(int32_t index) -> HardDriveInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardDriveInterface*>(this->hardDriveInterfaceVector->get(index));
    
}


    auto WindowsHardware::getMachineAccessControlAddress(int32_t index) -> MachineAccessControlAddressInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MachineAccessControlAddressInterface*>(this->macInterfaceVector->get(index));
    
}


    auto WindowsHardware::getMonitor(int32_t index) -> MonitorInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MonitorInterface*>(this->monitorInterfaceVector->get(index));
    
}


    auto WindowsHardware::getUsb(int32_t index) -> UsbInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<UsbInterface*>(this->usbInterfaceVector->get(index));
    
}


    auto WindowsHardware::getVideo(int32_t index) -> VideoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<VideoInterface*>(this->videoInterfaceVector->get(index));
    
}


    auto WindowsHardware::getComponent(int32_t index) -> HardwareComponentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));
    
}


    auto WindowsHardware::toString() -> std::string{

    StringMaker* hardwareBuffer = new StringMaker();;
    

    int32_t size = this->componentInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HardwareComponentInterface* componentInterface = dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));;
    
hardwareBuffer->append(JavaString::valueOf(componentInterface));
    
hardwareBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(hardwareBuffer);;
    
}


    auto WindowsHardware::compareTo(HardwareInterface* hardwareInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto WindowsHardware::difference(HardwareInterface* hardwareInterface) -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_WINDOWS_WINDOWSHARDWARE_CPP
