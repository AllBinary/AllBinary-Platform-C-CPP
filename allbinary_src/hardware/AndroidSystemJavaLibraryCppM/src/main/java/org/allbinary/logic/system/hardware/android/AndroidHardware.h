
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
        



        #ifndef ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H

            #include <hilog/log.h>
        
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
        : public HardwareInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: BasicArrayList componentInterfaceVector = BasicArrayListD();

    private: const std::string PROC_BUS_INPUT_DIRECTORY = "/proc/bus/input/";

    private: const std::string DEVICES = this->PROC_BUS_INPUT_DIRECTORY +"devices/";

    private: const int32_t MINHARDWARE = 3;

public: AndroidHardware();

                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath);

                //@Throws(Exception.constructor)
            
    private: LineNumberReader get(std::string filePath);

    public: HardwareComponentInterface getComponent(int32_t index);

    public: std::string toString();

    public: bool compareTo(HardwareInterface hardwareInterface);

    public: ABHashtable<Object*, Object*> difference(HardwareInterface hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H
