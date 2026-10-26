
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
        
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
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

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "PCComponentFactory.h"

class LinuxHardware
            : public Object
        : public HardwareInterface {

    private: static const std::string PCIFILE = "/proc/pci";

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

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

    private: const std::string NAME = "Linux Hardware Profile";

    private: const int32_t MINHARDWARE = 5;

public: LinuxHardware(std::string path){
this->init(path);
    
}


public: LinuxHardware(){
this->init(PCIFILE);
    

                        if(this->componentInterfaceVector.size() < this->MINHARDWARE)
                        
                                    {
                                    


                            throw Exception("Not Enough Data For A Valid License On Linux");
                    

                                    }
                                

    Cpu cpu = Cpu();;
    

                        if(cpu != 
                                    nullptr
                                )
                        
                                    {
                                    this->cpuInterfaceVector.add(cpu);
    
this->componentInterfaceVector.add(cpu);
    

                                    }
                                

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().OS))
                        
                                    {
                                    this->logUtil.putF("Hardware Data: " +this->toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath){

    LineNumberReader lineNumberReader = 
                null
            ;;
    

        try {
            this->init(lineNumberReader, filePath);
    

                //: 
} catch(e) 
            {

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().OS))
                        
                                    {
                                    this->logUtil.put("Hardware Data: " +this->toString(), this, this->commonStrings.CONSTRUCTOR, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: void init(LineNumberReader lineNumberReader, std::string filePath){

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
    

    FileReader pciFile = FileReader(filePath);;
    
lineNumberReader= LineNumberReader(pciFile);
    

                        if(lineNumberReader == 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList fileVector = SubDirectory::getInstance().search(filePath, AbFile::createAbFile(FilePathData::getInstance().PATH_START));;
    

                        if(!fileVector.isEmpty())
                        
                                    {
                                    
    AbFile file = fileVector.get(0);;
    
lineNumberReader= LineNumberReader(FileReader(file.getPath()));
    

                                    }
                                

                        if(lineNumberReader == 
                                    nullptr
                                )
                        
                                    {
                                    


                            throw Exception("No Linux File Data");
                    

                                    }
                                

                                    }
                                

                        if(lineNumberReader != 
                                    nullptr
                                )
                        
                                    {
                                    
                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().OS))
                        
                                    {
                                    this->logUtil.putF("PCI File Found", this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                

    std::string nextLine = lineNumberReader.readLine();;
    

        while(lineNumberReader != 
                                    nullptr
                                 && true)
        {

                        if(this->isNextHardware(nextLine))
                        
                                    {
                                    break;

                    

                                    }
                                
nextLine= lineNumberReader.readLine();
    
}


        while(this->isNextHardware(nextLine))
        {

    StringMaker componentData = StringMaker();;
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().OS))
                        
                                    {
                                    this->logUtil.putF("Found Hardware Device: " +this->componentInterfaceVector.size(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                
componentData.append(nextLine);
    
componentData.append(CommonSeps::getInstance().NEW_LINE);
    
nextLine= lineNumberReader.readLine();
    

    std::string componentType = PCComponentFactory::getInstance().java.componentType;;
    

        while(lineNumberReader != 
                                    nullptr
                                )
        {
componentData.append(nextLine);
    
componentData.append(CommonSeps::getInstance().NEW_LINE);
    
nextLine= lineNumberReader.readLine();
    

                        if(false || this->isNextHardware(nextLine))
                        
                                    {
                                    break;

                    

                                    }
                                
}


    HardwareComponentInterface componentInterface = PCComponentFactory::getInstance().getInstance(componentType, componentData.toString());;
    

                        if(componentInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->componentInterfaceVector.add(componentInterface);
    

                                    }
                                
}


                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().OS))
                        
                                    {
                                    this->logUtil.putF("Could not load PCI File", this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                

                        }
                            
lineNumberReader.close();
    

         finally {
            
                        if(lineNumberReader != 
                                    nullptr
                                )
                        lineNumberReader.close();
                                

         }
        
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
    
hardwareBuffer.append("Component ");
    
hardwareBuffer.appendint(index);
    
hardwareBuffer.append(": \n");
    
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


    public: bool isNextHardware(std::string nextLine){

                        if(true)
                        
                                    {
                                    
    int32_t index = nextLine.indexOf("Bus");;
    

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

            

