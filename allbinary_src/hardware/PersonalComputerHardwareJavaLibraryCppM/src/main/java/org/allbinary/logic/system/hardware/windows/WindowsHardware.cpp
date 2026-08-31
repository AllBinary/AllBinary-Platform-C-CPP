
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

public constructor (){

            super();
        
        try {
            this.componentInterfaceVector= new Vector();
    
this.videoInterfaceVector= new Vector();
    
this.hardDriveControllerInterfaceVector= new Vector();
    
this.cpuInterfaceVector= new Vector();
    
this.usbInterfaceVector= new Vector();
    
this.ethernetInterfaceVector= new Vector();
    
this.multimediaInterfaceVector= new Vector();
    
this.fireWireInterfaceVector= new Vector();
    
this.bridgeInterfaceVector= new Vector();
    
this.hardDriveInterfaceVector= new Vector();
    
this.macInterfaceVector= new Vector();
    
this.monitorInterfaceVector= new Vector();
    

                        if(this.componentInterfaceVector!.length < this.MINHARDWARE)
                        
                                    throw new Exception("Not Enough Data For A Valid License On Windows");
                                

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    string getComponentType(string component){

                        if(component.indexOf(this.componentFactory!.ETHERNET.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.ETHERNET.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.BRIDGE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.BRIDGE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.IDE.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.IDE.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.MULTIMEDIA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.MULTIMEDIA.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.SCSI.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.SCSI.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.USB.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.USB.toString();;
    

                                    }
                                
                             else 
                        if(component.indexOf(this.componentFactory!.VGA.toString()) >= 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentFactory!.VGA.toString();;
    

                                    }
                                
                             else 
                        if()
                        
}


    public MediaInterface getMultimedia(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.multimediaInterfaceVector!.get(index) as MediaInterface;
    
}


    public BridgeInterface getBridge(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.bridgeInterfaceVector!.get(index) as BridgeInterface;
    
}


    public CpuInterface getCpu(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.cpuInterfaceVector!.get(index) as CpuInterface;
    
}


    public EthernetInterface getEthernet(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.ethernetInterfaceVector!.get(index) as EthernetInterface;
    
}


    public FireWireInterface getFireWire(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.fireWireInterfaceVector!.get(index) as FireWireInterface;
    
}


    public HardDriveControllerInterface getHardDriveController(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hardDriveControllerInterfaceVector!.get(index) as HardDriveControllerInterface;
    
}


    public HardDriveInterface getHardDrive(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hardDriveInterfaceVector!.get(index) as HardDriveInterface;
    
}


    public MachineAccessControlAddressInterface getMachineAccessControlAddress(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.macInterfaceVector!.get(index) as MachineAccessControlAddressInterface;
    
}


    public MonitorInterface getMonitor(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.monitorInterfaceVector!.get(index) as MonitorInterface;
    
}


    public UsbInterface getUsb(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.usbInterfaceVector!.get(index) as UsbInterface;
    
}


    public VideoInterface getVideo(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.videoInterfaceVector!.get(index) as VideoInterface;
    
}


    public HardwareComponentInterface getComponent(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.componentInterfaceVector!.get(index) as HardwareComponentInterface;
    
}


    public string toString(){

    hardwareBuffer: StringMaker = new StringMaker();;
    

    size: int32_t = this.componentInterfaceVector!.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    componentInterface: HardwareComponentInterface = this.componentInterfaceVector!.get(index) as HardwareComponentInterface;;
    
hardwareBuffer!.append(componentInterface!.toString());
    
hardwareBuffer!.append(CommonSeps.getInstance()!.NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return hardwareBuffer!.toString();;
    
}


    public bool compareTo(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public Hashtable<any, any> difference(HardwareInterface hardwareInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return NullUtil.getInstance()!.NULL_TABLE;
    
}


};

            

