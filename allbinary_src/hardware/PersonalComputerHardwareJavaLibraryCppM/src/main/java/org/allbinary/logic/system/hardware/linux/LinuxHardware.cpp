
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
        

    private: static const PCIFILE: string = "/proc/pci";

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

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

    private: const NAME: string = "Linux Hardware Profile";

    private: const MINHARDWARE: int32_t = 5;

public constructor (string path){

            super();
        this.init(path);
    
}


public constructor (){

            super();
        this.init(PCIFILE);
    

                        if(this.componentInterfaceVector!.length < this.MINHARDWARE)
                        
                                    {
                                    


                            throw new Exception("Not Enough Data For A Valid License On Linux");
                    

                                    }
                                

    cpu: Cpu = new Cpu();;
    

                        if(cpu != 
                                    null
                                )
                        
                                    {
                                    this.cpuInterfaceVector!.add(cpu);
    
this.componentInterfaceVector!.add(cpu);
    

                                    }
                                

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.OS))
                        
                                    {
                                    this.logUtil!.putF("Hardware Data: " +this.toString(), this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    init(string filePath){

    lineNumberReader: LineNumberReader = 
                null
            ;;
    

        try {
            this.init(lineNumberReader, filePath);
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.OS))
                        
                                    {
                                    this.logUtil!.put("Hardware Data: " +this.toString(), this, this.commonStrings!.CONSTRUCTOR, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    init(LineNumberReader lineNumberReader, string filePath){

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
    

    pciFile: FileReader = new FileReader(filePath);;
    
lineNumberReader= new LineNumberReader(pciFile);
    

                        if(lineNumberReader == 
                                    null
                                )
                        
                                    {
                                    
    fileVector: BasicArrayList = SubDirectory.getInstance()!.search(filePath, AbFile.createAbFile(FilePathData.getInstance()!.PATH_START))!;;
    

                        if(!fileVector!.isEmpty())
                        
                                    {
                                    
    file: AbFile = fileVector!.get(0) as AbFile;;
    
lineNumberReader= new LineNumberReader(new FileReader(file.getPath()));
    

                                    }
                                

                        if(lineNumberReader == 
                                    null
                                )
                        
                                    {
                                    


                            throw new Exception("No Linux File Data");
                    

                                    }
                                

                                    }
                                

                        if(lineNumberReader != 
                                    null
                                )
                        
                                    {
                                    
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.OS))
                        
                                    {
                                    this.logUtil!.putF("PCI File Found", this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

    nextLine: string = lineNumberReader!.readLine()!;;
    

        while(lineNumberReader != 
                                    null
                                 && nextLine != 
                                    null
                                )
        {

                        if(this.isNextHardware(nextLine))
                        
                                    {
                                    break;

                    

                                    }
                                
nextLine= lineNumberReader!.readLine();
    
}


        while(this.isNextHardware(nextLine))
        {

    componentData: StringMaker = new StringMaker();;
    

                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.OS))
                        
                                    {
                                    this.logUtil!.putF("Found Hardware Device: " +this.componentInterfaceVector!.length, this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                
componentData!.append(nextLine);
    
componentData!.append(CommonSeps.getInstance()!.NEW_LINE);
    
nextLine= lineNumberReader!.readLine();
    

    componentType: string = PCComponentFactory.getInstance()!.java.componentType!;;
    

        while(lineNumberReader != 
                                    null
                                )
        {
componentData!.append(nextLine);
    
componentData!.append(CommonSeps.getInstance()!.NEW_LINE);
    
nextLine= lineNumberReader!.readLine();
    

                        if(nextLine == 
                                    null
                                 || this.isNextHardware(nextLine))
                        
                                    {
                                    break;

                    

                                    }
                                
}


    componentInterface: HardwareComponentInterface = PCComponentFactory.getInstance()!.getInstance(componentType, componentData!.toString())!;;
    

                        if(componentInterface != 
                                    null
                                )
                        
                                    {
                                    this.componentInterfaceVector!.add(componentInterface);
    

                                    }
                                
}


                                    }
                                
                        else {
                            
                        if(LogConfigTypes.LOGGING.contains(LogConfigTypeFactory.getInstance()!.OS))
                        
                                    {
                                    this.logUtil!.putF("Could not load PCI File", this, this.commonStrings!.CONSTRUCTOR);
    

                                    }
                                

                        }
                            
lineNumberReader!.close();
    

         finally {
            
                        if(lineNumberReader != 
                                    null
                                )
                        lineNumberReader!.close()

         }
        
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
    
hardwareBuffer!.append("Component ");
    
hardwareBuffer!.appendint(index);
    
hardwareBuffer!.append(": \n");
    
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


    public bool isNextHardware(string nextLine){

                        if(nextLine != 
                                    null
                                )
                        
                                    {
                                    
    index: int32_t = nextLine!.indexOf("Bus")!;;
    

                        if(index >= 0 && index < 4)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


};

            

