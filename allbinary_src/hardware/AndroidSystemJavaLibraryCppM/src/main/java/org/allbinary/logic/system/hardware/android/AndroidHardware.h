
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/io/Closeable.h>
#include <java/io/FileReader.h>
#include <java/io/LineNumberReader.h>
class NullCloseable;
class StdUtil;
class LogUtil;
class StringMaker;
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>
class UnknownHardware;
class HardwareComponentInterface;
class CommonSeps;
class CommonStrings;
template<typename T1, typename T2> class ABHashtable;
class BasicArrayList;
class BasicArrayListD;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class AndroidHardware
            : public virtual Object
        , public virtual HardwareInterface {

    /*protected*/ public: LogUtil* logUtil;

    private: CommonStrings* commonStrings;

    private: BasicArrayList* componentInterfaceVector;

    private: const std::string PROC_BUS_INPUT_DIRECTORY = "/proc/bus/input/";

    private: const std::string DEVICES;

    private: const int32_t MINHARDWARE = 3;

public: AndroidHardware();

                //@Throws(Exception.constructor)
            
    private: void init(std::string filePath);

                //@Throws(Exception.constructor)
            
    private: LineNumberReader* get(std::string filePath);

    public: HardwareComponentInterface* getComponent(int32_t index);

    public: std::string toString();

    public: bool compareTo(HardwareInterface* hardwareInterface);

    public: ABHashtable<Object*, Object*>* difference(HardwareInterface* hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H_COMPLETE
        #if __has_include(<java/io/Closeable.h>)
#include <java/io/Closeable.h>
#endif
#if __has_include(<java/io/FileReader.h>)
#include <java/io/FileReader.h>
#endif
#if __has_include(<java/io/LineNumberReader.h>)
#include <java/io/LineNumberReader.h>
#endif
#if __has_include(<org/allbinary/logic/io/NullCloseable.h>)
#include <org/allbinary/logic/io/NullCloseable.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/HardwareInterface.h>)
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/android/UnknownHardware.h>)
#include <org/allbinary/logic/system/hardware/components/android/UnknownHardware.h>
#endif
#if __has_include(<org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>)
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>
#endif
#if __has_include(<org/allbinary/string/CommonSeps.h>)
#include <org/allbinary/string/CommonSeps.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif

        #endif
    
