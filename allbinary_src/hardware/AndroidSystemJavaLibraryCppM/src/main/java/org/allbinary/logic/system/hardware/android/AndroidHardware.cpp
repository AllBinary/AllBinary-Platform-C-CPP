
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
        



            #include <hilog/log.h>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <org/allbinary/logic/io/NullCloseable.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/android/UnknownHardware.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidHardware
            : public Object
        , public HardwareInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: BasicArrayList* componentInterfaceVector = new BasicArrayListD();

    private: const std::string PROC_BUS_INPUT_DIRECTORY = "/proc/bus/input/";

    private: const std::string DEVICES = this->PROC_BUS_INPUT_DIRECTORY +"devices/";

    private: const int32_t MINHARDWARE = 3;

public: AndroidHardware(){
this->init(this->DEVICES);
    

    int32_t size = this->componentInterfaceVector->size();;
    

                        if(size < this->MINHARDWARE)
                        
                                    {
                                    


                            throw new Exception("Not Enough Data For A Valid License On Linux");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath){

    Closeable* lineNumberReader = NullCloseable::NULL_CLOSEABLE;;
    

        try {
            lineNumberReader= this->get(filePath);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put("Hardware Data: " +this->toString(), this, this->commonStrings->INIT, &e);
    



                            throw e;
                    
}

         finally {
            
                        if(lineNumberReader != 
                                    nullptr
                                )
                        
                                    {
                                    lineNumberReader->close();
    

                                    }
                                

         }
        
}


                //@Throws(Exception.constructor)
            
    private: LineNumberReader* get(std::string filePath){
this->componentInterfaceVector= new BasicArrayListD();
    

    FileReader* pciFile = new FileReader(filePath);;
    

    LineNumberReader* lineNumberReader = new LineNumberReader(pciFile);;
    
this->logUtil->putF("File Found", this, this->commonStrings->CONSTRUCTOR);
    

    std::string nextLine = lineNumberReader->readLine();;
    

        while(true)
        {
nextLine= lineNumberReader->readLine();
    
this->componentInterfaceVector->add(new UnknownHardware(nextLine));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return lineNumberReader;
    
}


    public: HardwareComponentInterface* getComponent(int32_t index){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));
    
}


    public: std::string toString(){

    StringMaker* stringBuilder = new StringMaker();;
    

    int32_t size = this->componentInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HardwareComponentInterface* componentInterface = dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));;
    
stringBuilder->append(componentInterface->toString());
    
stringBuilder->append(CommonSeps::getInstance()->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return stringBuilder->toString();;
    
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

            

