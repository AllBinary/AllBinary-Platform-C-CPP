
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
        



        #ifndef ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_CPP
        #define ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/input/AllBinarySensorManager.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/NullUtil.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
Object* AllBinarySensorManager::instance = NullUtil::getInstance()->NULL_OBJECT;

    auto AllBinarySensorManager::getInstance() -> AllBinarySensorManager*{

                        if(AllBinarySensorManager::instance == NullUtil::getInstance()->NULL_OBJECT)
                        
                                    {
                                    AllBinarySensorManager::instance= new AllBinarySensorManager();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AllBinarySensorManager*>(AllBinarySensorManager::instance);
    
}


AllBinarySensorManager::AllBinarySensorManager() : list(new BasicArrayListD()){
}


    auto AllBinarySensorManager::init() -> void{
}


    auto AllBinarySensorManager::getSensorNamesList() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->list;
    
}


    auto AllBinarySensorManager::shutdown() -> void{
}




        #endif //ORG_ALLBINARY_INPUT_ALLBINARYSENSORMANAGER_CPP
