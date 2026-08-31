
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
        
            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
#include <java/io/Closeable.h>

      
#include <java/io/FileReader.h>

      
#include <java/io/LineNumberReader.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/io/NullCloseable.h>

      
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/system/hardware/HardwareInterface.h>

      
#include <org/allbinary/logic/system/hardware/components/android/UnknownHardware.h>

      
#include <org/allbinary/logic/system/hardware/components/interfaces/HardwareComponentInterface.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AndroidHardware
            : public Object
        : public HardwareInterface {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: componentInterfaceVector: BasicArrayList = new BasicArrayListD();

    private: const PROC_BUS_INPUT_DIRECTORY: string = "/proc/bus/input/";

    private: const DEVICES: string = this.PROC_BUS_INPUT_DIRECTORY +"devices/";

    private: const MINHARDWARE: int32_t = 3;

public constructor ();

                //@Throws(Exception.constructor)
            
    init(string filePath);

                //@Throws(Exception.constructor)
            
    LineNumberReader get(string filePath);

    public HardwareComponentInterface getComponent(int32_t index);

    public string toString();

    public bool compareTo(HardwareInterface hardwareInterface);

    public Hashtable<any, any> difference(HardwareInterface hardwareInterface);

};

            


        #endif //ORG_ALLBINARY_LOGIC_SYSTEM_HARDWARE_ANDROID_ANDROIDHARDWARE_H
