
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
        



        #ifndef ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H
        #define ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H

            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/logic/communication/log/ForcedLogUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AllBinarySensorListener.h"

class AllBinarySensor
            : public Object
        : public AllBinarySensorListener {

    public: static const AllBinarySensor NULL_ALLBINARY_SENSOR = AllBinarySensor();

    private: static int32_t max = 100;

    public: static void setMax(int32_t max);

    public: static int32_t getMax();

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

protected: AllBinarySensor();

    public: void init();

                //@Throws(Exception.constructor)
            
    public: void update();

    public: int32_t getId();

    public: void shutdown();

    public: void onSensorChange();

};

            


        #endif //ORG_ALLBINARY_INPUT_ALLBINARYSENSOR_H
