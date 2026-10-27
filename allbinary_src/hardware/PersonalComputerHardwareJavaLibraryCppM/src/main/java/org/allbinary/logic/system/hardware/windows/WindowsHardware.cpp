
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
        
class WindowsHardware
            : public Object
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

    private: ComponentFactory* componentFactory = ComponentFactory::getInstance();

public: WindowsHardware(){

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
                        
                                    throw new Exception("Not Enough Data For A Valid License On Windows");
                                

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    private: std::string getComponentType(std::string component){

                        if(JavaString::indexOf(component, this->componentFactory->ETHERNET.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->ETHERNET.toString();;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, this->componentFactory->BRIDGE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->BRIDGE.toString();;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, this->componentFactory->IDE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->IDE.toString();;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, this->componentFactory->MULTIMEDIA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->MULTIMEDIA.toString();;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, this->componentFactory->SCSI.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->SCSI.toString();;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, this->componentFactory->USB.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->USB.toString();;
    

                                    }
                                
                             else 
                        if(JavaString::indexOf(component, this->componentFactory->VGA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory->VGA.toString();;
    

                                    }
                                
                             else 
                        if()
                        
}


    public: MediaInterface* getMultimedia(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<MediaInterface*>(this->multimediaInterfaceVector->get(index));
    
}


    public: BridgeInterface* getBridge(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BridgeInterface*>(this->bridgeInterfaceVector->get(index));
    
}


    public: CpuInterface* getCpu(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<CpuInterface*>(this->cpuInterfaceVector->get(index));
    
}


    public: EthernetInterface* getEthernet(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<EthernetInterface*>(this->ethernetInterfaceVector->get(index));
    
}


    public: FireWireInterface* getFireWire(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<FireWireInterface*>(this->fireWireInterfaceVector->get(index));
    
}


    public: HardDriveControllerInterface* getHardDriveController(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HardDriveControllerInterface*>(this->hardDriveControllerInterfaceVector->get(index));
    
}


    public: HardDriveInterface* getHardDrive(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HardDriveInterface*>(this->hardDriveInterfaceVector->get(index));
    
}


    public: MachineAccessControlAddressInterface* getMachineAccessControlAddress(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<MachineAccessControlAddressInterface*>(this->macInterfaceVector->get(index));
    
}


    public: MonitorInterface* getMonitor(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<MonitorInterface*>(this->monitorInterfaceVector->get(index));
    
}


    public: UsbInterface* getUsb(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<UsbInterface*>(this->usbInterfaceVector->get(index));
    
}


    public: VideoInterface* getVideo(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<VideoInterface*>(this->videoInterfaceVector->get(index));
    
}


    public: HardwareComponentInterface* getComponent(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));
    
}


    public: std::string toString(){

    StringMaker* hardwareBuffer = new StringMaker();;
    

    int32_t size = this->componentInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HardwareComponentInterface* componentInterface = dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));;
    
hardwareBuffer->append(componentInterface->toString());
    
hardwareBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hardwareBuffer->toString();;
    
}


    public: bool compareTo(HardwareInterface* hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: ABHashtable<Object*, Object*>* difference(HardwareInterface* hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


};

            

