
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
        



            #include "../../../../../../../java/lang/Object.h"
        
            #include "../../../../../../../java/lang/Exception.h"
        
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
        #include "CpuInfo.h"

class Cpu
            : public Object
        : public CpuInterface, public HardwareComponentInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: const std::string CPUFILE = "/proc/cpuinfo";

    private: HashMap<any, any> cpuHashMap;

public: Cpu(std::string filePath){
this->init(filePath);
    
}


public: Cpu(){
this->init(this->CPUFILE);
    
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
                                    this->logUtil.put(StringMaker().append("Cpu Data: ").append(this->toString()).toString(), this, this->commonStrings.CONSTRUCTOR, e);
    

                                    }
                                



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: void init(LineNumberReader lineNumberReader, std::string filePath){

        try {
            
    FileReader fileReader = FileReader(filePath);;
    
lineNumberReader= LineNumberReader(fileReader);
    
this->cpuHashMap= StdUtil::getInstance().createHashMap();
    

                        if(lineNumberReader == 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList fileVector = SubDirectory::getInstance().search(filePath, AbFile::createAbFile(FilePathData::getInstance().PATH_START));;
    

                        if(LogConfigTypes::LOGGING.contains(LogConfigTypeFactory::getInstance().OS))
                        
                                    {
                                    this->logUtil.putF(StringMaker().append("Cpu File BasicArrayList Size: ").appendint(fileVector.size()).toString(), this, this->commonStrings.CONSTRUCTOR);
    

                                    }
                                

                        if(!fileVector.isEmpty())
                        
                                    {
                                    
    AbFile file = fileVector.get(0) as AbFile;;
    
lineNumberReader= LineNumberReader(FileReader(file.getPath()));
    

                                    }
                                

                                    }
                                

                        if(lineNumberReader != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::string nextLine = lineNumberReader.readLine();;
    

        while(lineNumberReader != 
                                    nullptr
                                 && true)
        {

    int32_t index = nextLine.indexOf(':');;
    

                        if(index >= 0)
                        
                                    {
                                    
    std::string key = nextLine.substring(0, index);;
    

    int32_t valueIndex = index +1;;
    

    std::string value = nextLine.substring(valueIndex, nextLine.size());;
    

                        if(key.indexOf(CpuInfo::PROCESSOR.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::PROCESSOR, value);
                                

                        if(key.indexOf(CpuInfo::VENDORID.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::VENDORID, value);
                                

                        if(key.indexOf(CpuInfo::CPUFAMILY.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::CPUFAMILY, value);
                                

                        if(key.indexOf(CpuInfo::MODEL.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::MODEL, value);
                                

                        if(key.indexOf(CpuInfo::MODELNAME.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::MODELNAME, value);
                                

                        if(key.indexOf(CpuInfo::STEPPING.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::STEPPING, value);
                                

                        if(key.indexOf(CpuInfo::CPUMHZ.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::CPUMHZ, value);
                                

                        if(key.indexOf(CpuInfo::CACHESIZE.toString()) >= 0)
                        this->cpuHashMap.put(CpuInfo::CACHESIZE, value);
                                

                                    }
                                
nextLine= lineNumberReader.readLine();
    
}


                                    }
                                

         finally {
            
                        if(lineNumberReader != 
                                    nullptr
                                )
                        lineNumberReader.close();
                                

         }
        
}


    public: std::string getProcessor(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::PROCESSOR) as string;
    
}


    public: std::string getVendorId(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::VENDORID) as string;
    
}


    public: std::string getCpuFamily(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::CPUFAMILY) as string;
    
}


    public: std::string getModel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::MODEL) as string;
    
}


    public: std::string getModelName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::MODELNAME) as string;
    
}


    public: std::string getStepping(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::STEPPING) as string;
    
}


    public: std::string getCpuSpeed(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::CPUMHZ) as string;
    
}


    public: std::string getCacheSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->cpuHashMap.get(CpuInfo::CACHESIZE) as string;
    
}


    public: bool compareTo(CpuInterface cpuInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: bool compareTo(HardwareComponentInterface componentInterface){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    public: std::string toString(){

    CommonLabels commonLabels = CommonLabels::getInstance();;
    

    CommonSeps commonSeps = CommonSeps::getInstance();;
    

    StringMaker stringMaker = StringMaker();;
    
stringMaker.append(CpuInfo::PROCESSOR.toString()).append(commonLabels.COLON_SEP).append(this->getProcessor());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::VENDORID.toString()).append(commonLabels.COLON_SEP).append(this->getVendorId());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::CPUFAMILY.toString()).append(commonLabels.COLON_SEP).append(this->getCpuFamily());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::MODEL.toString()).append(commonLabels.COLON_SEP).append(this->getModel());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::MODELNAME.toString()).append(commonLabels.COLON_SEP).append(this->getModelName());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::STEPPING.toString()).append(commonLabels.COLON_SEP).append(this->getStepping());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::CPUMHZ.toString()).append(commonLabels.COLON_SEP).append(this->getCpuSpeed());
    
stringMaker.append(commonSeps.NEW_LINE);
    
stringMaker.append(CpuInfo::CACHESIZE.toString()).append(commonLabels.COLON_SEP).append(this->getCacheSize());
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringMaker.toString();;
    
}


};

            

