
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
        



        #ifndef ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_H
        #define ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_H

            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class AllBinarySensorManager
            : public Object
         {

    private: static Object* instance = NullUtil::getInstance().NULL_OBJECT;

    public: static AllBinarySensorManager getInstance();

    public: const std::string ORIENTATION_SENSOR_INPUT = "Orientation Sensor Input";

    public: const std::string ORIENTATION_TYPE = "Orientation Type";

private: AllBinarySensorManager();

    public: void init();

    private: const BasicArrayList list = BasicArrayListD();

    public: BasicArrayList getSensorNamesList();

    public: void shutdown();

};

            


        #endif //ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_H
