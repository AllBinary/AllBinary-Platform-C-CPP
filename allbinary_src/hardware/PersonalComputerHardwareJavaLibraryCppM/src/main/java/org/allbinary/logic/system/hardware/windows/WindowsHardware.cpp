
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
        : public HardwareInterface {

    private: BasicArrayList componentInterfaceVector;

    private: BasicArrayList videoInterfaceVector;

    private: BasicArrayList hardDriveControllerInterfaceVector;

    private: BasicArrayList cpuInterfaceVector;

    private: BasicArrayList usbInterfaceVector;

    private: BasicArrayList ethernetInterfaceVector;

    private: BasicArrayList multimediaInterfaceVector;

    private: BasicArrayList fireWireInterfaceVector;

    private: BasicArrayList bridgeInterfaceVector;

    private: BasicArrayList hardDriveInterfaceVector;

    private: BasicArrayList macInterfaceVector;

    private: BasicArrayList monitorInterfaceVector;

    private: const std::string NAME = "Windows Hardware Profile";

    private: const int32_t MINHARDWARE = 0;

    private: const ComponentFactory componentFactory = ComponentFactory::getInstance();

public: WindowsHardware(){

        try {
            this->componentInterfaceVector= BasicArrayListD();
    
this->videoInterfaceVector= BasicArrayListD();
    
this->hardDriveControllerInterfaceVector= BasicArrayListD();
    
this->cpuInterfaceVector= BasicArrayListD();
    
this->usbInterfaceVector= BasicArrayListD();
    
this->ethernetInterfaceVector= BasicArrayListD();
    
this->multimediaInterfaceVector= BasicArrayListD();
    
this->fireWireInterfaceVector= BasicArrayListD();
    
this->bridgeInterfaceVector= BasicArrayListD();
    
this->hardDriveInterfaceVector= BasicArrayListD();
    
this->macInterfaceVector= BasicArrayListD();
    
this->monitorInterfaceVector= BasicArrayListD();
    

                        if(this->componentInterfaceVector.size() < this->MINHARDWARE)
                        
                                    throw Exception("Not Enough Data For A Valid License On Windows");
                                

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    private: std::string getComponentType(std::string component){

                        if(component.indexOf(this->componentFactory.ETHERNET.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.ETHERNET.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.BRIDGE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.BRIDGE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.IDE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.IDE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.MULTIMEDIA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.MULTIMEDIA.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.SCSI.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.SCSI.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.USB.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.USB.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this->componentFactory.VGA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentFactory.VGA.toString();;
    

                                    }
                                
                             else 
                        if()
                        
}


    public: MediaInterface getMultimedia(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->multimediaInterfaceVector.get(index);
    
}


    public: BridgeInterface getBridge(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->bridgeInterfaceVector.get(index);
    
}


    public: CpuInterface getCpu(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuInterfaceVector.get(index);
    
}


    public: EthernetInterface getEthernet(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->ethernetInterfaceVector.get(index);
    
}


    public: FireWireInterface getFireWire(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->fireWireInterfaceVector.get(index);
    
}


    public: HardDriveControllerInterface getHardDriveController(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hardDriveControllerInterfaceVector.get(index);
    
}


    public: HardDriveInterface getHardDrive(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hardDriveInterfaceVector.get(index);
    
}


    public: MachineAccessControlAddressInterface getMachineAccessControlAddress(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->macInterfaceVector.get(index);
    
}


    public: MonitorInterface getMonitor(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->monitorInterfaceVector.get(index);
    
}


    public: UsbInterface getUsb(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->usbInterfaceVector.get(index);
    
}


    public: VideoInterface getVideo(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->videoInterfaceVector.get(index);
    
}


    public: HardwareComponentInterface getComponent(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->componentInterfaceVector.get(index);
    
}


    public: std::string toString(){

    StringMaker hardwareBuffer = StringMaker();;
    

    int32_t size = this->componentInterfaceVector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HardwareComponentInterface componentInterface = this->componentInterfaceVector.get(index);;
    
hardwareBuffer.append(componentInterface.toString());
    
hardwareBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hardwareBuffer.toString();;
    
}


    public: bool compareTo(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: ABHashtable<Object*, Object*> difference(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StdUtil::getInstance().NULL_TABLE;
    
}


};

            

