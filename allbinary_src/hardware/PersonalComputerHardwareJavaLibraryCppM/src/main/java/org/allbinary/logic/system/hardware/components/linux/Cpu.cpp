
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/components/linux/Cpu.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypeFactory.h>

      
#include <org/allbinary/logic/communication/log/config/type/LogConfigTypes.h>

      
#include <org/allbinary/logic/io/file/AbFile.h>

      
#include <org/allbinary/logic/io/file/FilePathData.h>

      
#include <org/allbinary/logic/io/file/directory/SubDirectory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/CpuInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/system/hardware/components/linux/CpuInfo.h"


Cpu::Cpu(std::string filePath) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init(filePath);
    
}


Cpu::Cpu() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->init(this->CPUFILE);
    
}


                //@Throws(Exception.constructor)
            
    auto Cpu::init(std::string filePath) -> void{

    LineNumberReader* lineNumberReader = 
                null
            ;;
    

        try {
            this->init(lineNumberReader, filePath);
    

                //: 
} catch(Exception& e) 
            {

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->put((new StringMaker())->append("Cpu Data: ")->append(this->toString())->toString(), this, this->commonStrings->CONSTRUCTOR, &e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    auto Cpu::init(LineNumberReader* lineNumberReader, std::string filePath) -> void{

        try {
            
    FileReader* fileReader = new FileReader(filePath);;
    
lineNumberReader= new LineNumberReader(fileReader);
    
this->cpuHashMap= StdUtil::getInstance()->createHashMap();
    

                        if(lineNumberReader == 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList* fileVector = SubDirectory::getInstance()->search(filePath, AbFile::createAbFile(FilePathData::getInstance()->PATH_START));;
    

                        if(LogConfigTypes::LOGGING->contains(LogConfigTypeFactory::getInstance()->OS))
                        
                                    {
                                    this->logUtil->putF((new StringMaker())->append("Cpu File BasicArrayList Size: ")->appendint(fileVector->size())->toString(), this, this->commonStrings->CONSTRUCTOR);
    

                                    }
                                

                        if(!fileVector->isEmpty())
                        
                                    {
                                    
    AbFile* file = dynamic_cast<AbFile*>(fileVector->get(0));;
    
lineNumberReader= new LineNumberReader(new FileReader(file->getPath()));
    

                                    }
                                

                                    }
                                

                        if(lineNumberReader != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string nextLine = lineNumberReader->readLine();;
    

        while(lineNumberReader != 
                                    nullptr
                                 && true)
        {

    int32_t index = JavaString::indexOf(nextLine, ':');;
    

                        if(index >= 0)
                        
                                    {
                                    
    std::string key = JavaString::substring(nextLine, 0, index);;
    

    int32_t valueIndex = index +1;;
    

    std::string value = JavaString::substring(nextLine, valueIndex, nextLine.size());;
    

                        if(JavaString::indexOf(key, CpuInfo::PROCESSOR->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::PROCESSOR, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::VENDORID->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::VENDORID, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::CPUFAMILY->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::CPUFAMILY, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::MODEL->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::MODEL, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::MODELNAME->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::MODELNAME, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::STEPPING->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::STEPPING, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::CPUMHZ->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::CPUMHZ, value);
                                

                        if(JavaString::indexOf(key, CpuInfo::CACHESIZE->toString()) >= 0)
                        this->cpuHashMap->put(CpuInfo::CACHESIZE, value);
                                

                                    }
                                
nextLine= lineNumberReader->readLine();
    
}


                                    }
                                

         finally {
            
                        if(lineNumberReader != 
                                    nullptr
                                )
                        lineNumberReader->close();
                                

         }
        
}


    auto Cpu::getProcessor() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::PROCESSOR));
    
}


    auto Cpu::getVendorId() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::VENDORID));
    
}


    auto Cpu::getCpuFamily() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::CPUFAMILY));
    
}


    auto Cpu::getModel() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::MODEL));
    
}


    auto Cpu::getModelName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::MODELNAME));
    
}


    auto Cpu::getStepping() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::STEPPING));
    
}


    auto Cpu::getCpuSpeed() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::CPUMHZ));
    
}


    auto Cpu::getCacheSize() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return JavaBoxes::unbox<std::string>(this->cpuHashMap->get(CpuInfo::CACHESIZE));
    
}


    auto Cpu::compareTo(CpuInterface* cpuInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto Cpu::compareTo(HardwareComponentInterface* componentInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto Cpu::toString() -> std::string{

    CommonLabels* commonLabels = CommonLabels::getInstance();;
    

    CommonSeps* commonSeps = CommonSeps::getInstance();;
    

    StringMaker* stringMaker = new StringMaker();;
    
stringMaker->append(CpuInfo::PROCESSOR->toString())->append(commonLabels->COLON_SEP)->append(this->getProcessor());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::VENDORID->toString())->append(commonLabels->COLON_SEP)->append(this->getVendorId());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::CPUFAMILY->toString())->append(commonLabels->COLON_SEP)->append(this->getCpuFamily());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::MODEL->toString())->append(commonLabels->COLON_SEP)->append(this->getModel());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::MODELNAME->toString())->append(commonLabels->COLON_SEP)->append(this->getModelName());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::STEPPING->toString())->append(commonLabels->COLON_SEP)->append(this->getStepping());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::CPUMHZ->toString())->append(commonLabels->COLON_SEP)->append(this->getCpuSpeed());
    
stringMaker->append(commonSeps->NEW_LINE);
    
stringMaker->append(CpuInfo::CACHESIZE->toString())->append(commonLabels->COLON_SEP)->append(this->getCacheSize());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker->toString();;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_COMPONENTS_LINUX_CPU_CPP
