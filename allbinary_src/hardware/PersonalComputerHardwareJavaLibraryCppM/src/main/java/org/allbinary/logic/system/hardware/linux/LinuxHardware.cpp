
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/linux/LinuxHardware.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
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
        #include "org/allbinary/logic/system/hardware/linux/PCComponentFactory.h"


LinuxHardware::LinuxHardware(std::string path) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init(path);
    
}


LinuxHardware::LinuxHardware() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init(PCIFILE);
    

                        if(this->componentInterfaceVector->size() < this->MINHARDWARE)
                        
                                    {
                                    


                            throw Exception("Not Enough Data For A Valid License On Linux");
                    

                                    }
                                

    Cpu* cpu = new Cpu();;
    

                        if(cpu != 
                                    nullptr
                                )
                        
                                    {
                                    this->cpuInterfaceVector->add(cpu);
    
this->componentInterfaceVector->add(cpu);
    

                                    }
                                

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Hardware Data: ") +JavaString::valueOf(this->toString()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto LinuxHardware::init(std::string filePath) -> void{

    LineNumberReader* lineNumberReader = 
                nullptr
            ;;
    

        try {
            this->init(lineNumberReader, filePath);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->put(JavaString::valueOf("Hardware Data: ") +JavaString::valueOf(this->toString()), this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto LinuxHardware::init(LineNumberReader* lineNumberReader, std::string filePath) -> void{

        {
        
        auto finallyFunction_N68048 = [&]() {
            
                        if(lineNumberReader != 
                                    nullptr
                                )
                        lineNumberReader->close();
                                

        };
        
        struct FinallyGuard_N68048 { decltype(finallyFunction_N68048)& function; ~FinallyGuard_N68048() { function(); } } finallyGuard_N68048{finallyFunction_N68048};
        
        {
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
    

    FileReader* pciFile = new FileReader(filePath);;
    
lineNumberReader= new LineNumberReader(pciFile);
    

                        if(lineNumberReader == 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList* fileVector = SubDirectory::getInstance()->search(filePath, AbFile::createAbFile(FilePathData::getInstance()->PATH_START));;
    

                        if(!fileVector->isEmpty())
                        
                                    {
                                    
    AbFile* file = dynamic_cast<AbFile*>(fileVector->get(0));;
    
lineNumberReader= new LineNumberReader(new FileReader(file->getPath()));
    

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
                                    
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->putF("PCI File Found", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

    std::string nextLine = lineNumberReader->readLine();;
    

        while(lineNumberReader != 
                                    nullptr
                                 && true)
        {

                        if(this->isNextHardware(nextLine))
                        
                                    {
                                    break;

                    

                                    }
                                
nextLine= lineNumberReader->readLine();
    
}


        while(this->isNextHardware(nextLine))
        {

    StringMaker* componentData = new StringMaker();;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->putF(JavaString::valueOf("Found Hardware Device: ") +JavaString::valueOf(this->componentInterfaceVector->size()), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                
componentData->append(nextLine);
    
componentData->append(CommonSeps::getInstance()->NEW_LINE);
    
nextLine= lineNumberReader->readLine();
    

    std::string componentType = PCComponentFactory::getInstance()->java.componentType;;
    

        while(lineNumberReader != 
                                    nullptr
                                )
        {
componentData->append(nextLine);
    
componentData->append(CommonSeps::getInstance()->NEW_LINE);
    
nextLine= lineNumberReader->readLine();
    

                        if(false || this->isNextHardware(nextLine))
                        
                                    {
                                    break;

                    

                                    }
                                
}


    HardwareComponentInterface* componentInterface = PCComponentFactory::getInstance()->getInstance(componentType, componentData->toString());;
    

                        if(componentInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->componentInterfaceVector->add(componentInterface);
    

                                    }
                                
}


                                    }
                                
                        else {
                            
                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->putF("Could not load PCI File", this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                        }
                            
lineNumberReader->close();
    

        }

        }

}


    auto LinuxHardware::getMultimedia(int32_t index) -> MediaInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MediaInterface*>(this->multimediaInterfaceVector->get(index));
    
}


    auto LinuxHardware::getBridge(int32_t index) -> BridgeInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BridgeInterface*>(this->bridgeInterfaceVector->get(index));
    
}


    auto LinuxHardware::getCpu(int32_t index) -> CpuInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<CpuInterface*>(this->cpuInterfaceVector->get(index));
    
}


    auto LinuxHardware::getEthernet(int32_t index) -> EthernetInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<EthernetInterface*>(this->ethernetInterfaceVector->get(index));
    
}


    auto LinuxHardware::getFireWire(int32_t index) -> FireWireInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<FireWireInterface*>(this->fireWireInterfaceVector->get(index));
    
}


    auto LinuxHardware::getHardDriveController(int32_t index) -> HardDriveControllerInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardDriveControllerInterface*>(this->hardDriveControllerInterfaceVector->get(index));
    
}


    auto LinuxHardware::getHardDrive(int32_t index) -> HardDriveInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardDriveInterface*>(this->hardDriveInterfaceVector->get(index));
    
}


    auto LinuxHardware::getMachineAccessControlAddress(int32_t index) -> MachineAccessControlAddressInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MachineAccessControlAddressInterface*>(this->macInterfaceVector->get(index));
    
}


    auto LinuxHardware::getMonitor(int32_t index) -> MonitorInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<MonitorInterface*>(this->monitorInterfaceVector->get(index));
    
}


    auto LinuxHardware::getUsb(int32_t index) -> UsbInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<UsbInterface*>(this->usbInterfaceVector->get(index));
    
}


    auto LinuxHardware::getVideo(int32_t index) -> VideoInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<VideoInterface*>(this->videoInterfaceVector->get(index));
    
}


    auto LinuxHardware::getComponent(int32_t index) -> HardwareComponentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));
    
}


    auto LinuxHardware::toString() -> std::string{

    StringMaker* hardwareBuffer = new StringMaker();;
    

    int32_t size = this->componentInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HardwareComponentInterface* componentInterface = dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));;
    
hardwareBuffer->append("Component ");
    
hardwareBuffer->appendint(index);
    
hardwareBuffer->append(": \n");
    
hardwareBuffer->append(componentInterface->toString());
    
hardwareBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return hardwareBuffer->toString();;
    
}


    auto LinuxHardware::compareTo(HardwareInterface* hardwareInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto LinuxHardware::difference(HardwareInterface* hardwareInterface) -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}


    auto LinuxHardware::isNextHardware(std::string nextLine) -> bool{

                        if(true)
                        
                                    {
                                    
    int32_t index = JavaString::indexOf(nextLine, "Bus");;
    

                        if(index >= 0 && index < 4)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_LINUX_LINUXHARDWARE_CPP
