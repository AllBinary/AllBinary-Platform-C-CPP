
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
        



        #ifndef ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class InputImageType
            : public Object
         {

    private: static inline HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();

    private: static inline BasicArrayList* TYPE_VECTOR = new BasicArrayListD();

    public: static InputImageType* CAPTURE() { static std::unique_ptr<InputImageType> value(new InputImageType("Capture", 0)); return value.get(); }

    public: static InputImageType* COMPARISON() { static std::unique_ptr<InputImageType> value(new InputImageType("Comparison", 1)); return value.get(); }

    public: static InputImageType* MOTION() { static std::unique_ptr<InputImageType> value(new InputImageType("Motion", 2)); return value.get(); }

    public: static InputImageType* getInstance(std::string imageTypeString);

    public: static BasicArrayList* getAllAsVector();

    private: std::string name;

    private: int32_t index;

private: InputImageType(std::string name, int32_t index);

    public: std::string toString();

    public: std::string getName();

    public: int32_t getIndex();

};

            


        #endif //ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H
