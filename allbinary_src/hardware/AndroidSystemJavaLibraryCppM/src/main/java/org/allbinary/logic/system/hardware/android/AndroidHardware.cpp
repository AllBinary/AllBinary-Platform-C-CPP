
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_CPP
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/system/hardware/android/AndroidHardware.h"
        

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
        

AndroidHardware::AndroidHardware() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), componentInterfaceVector(new BasicArrayListD()), DEVICES(JavaString::valueOf(this->PROC_BUS_INPUT_DIRECTORY) +JavaString::valueOf("devices/")){
this->init(this->DEVICES);
    

    int32_t size = this->componentInterfaceVector->size();;
    

                        if(size < this->MINHARDWARE)
                        
                                    {
                                    


                            throw Exception("Not Enough Data For A Valid License On Linux");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    auto AndroidHardware::init(std::string filePath) -> void{

    Closeable* lineNumberReader = NullCloseable::NULL_CLOSEABLE;;
    

        {
        
        auto finallyFunction_N66530 = [&]() {
            
                        if(lineNumberReader != 
                                    nullptr
                                )
                        
                                    {
                                    lineNumberReader->close();
    

                                    }
                                

        };
        
        struct FinallyGuard_N66530 { decltype(finallyFunction_N66530)& function; ~FinallyGuard_N66530() { function(); } } finallyGuard_N66530{finallyFunction_N66530};
        
        try {
            lineNumberReader= this->get(filePath);
    

                //: 
} catch(Exception& e) 
            {
this->logUtil->put(JavaString::valueOf("Hardware Data: ") +JavaString::valueOf(JavaString::valueOf(this)), this, this->commonStrings->INIT, &e);
    



                            throw e;
                    
}

        }

}


                //@Throws(Exception.constructor)
            
    auto AndroidHardware::get(std::string filePath) -> LineNumberReader*{
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


    auto AndroidHardware::getComponent(int32_t index) -> HardwareComponentInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));
    
}


    auto AndroidHardware::toString() -> std::string{

    StringMaker* stringBuilder = new StringMaker();;
    

    int32_t size = this->componentInterfaceVector->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    HardwareComponentInterface* componentInterface = dynamic_cast<HardwareComponentInterface*>(this->componentInterfaceVector->get(index));;
    
stringBuilder->append(JavaString::valueOf(componentInterface));
    
stringBuilder->append(CommonSeps::getInstance()->NEW_LINE);
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return JavaString::valueOf(stringBuilder);;
    
}


    auto AndroidHardware::compareTo(HardwareInterface* hardwareInterface) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    
}


    auto AndroidHardware::difference(HardwareInterface* hardwareInterface) -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return StdUtil::getInstance()->NULL_TABLE;
    
}




        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_CPP
