
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <java/util/HashMap.h>
class BasicArrayList;
class BasicArrayListD;
class StdUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputImageType
            : public virtual Object
         {

    private: static HashMap<Object*, Object*>* hashMap;

    private: static BasicArrayList* TYPE_VECTOR;

    private: static InputImageType* CAPTURE_owner();
    public: static InputImageType* CAPTURE;

    private: static InputImageType* COMPARISON_owner();
    public: static InputImageType* COMPARISON;

    private: static InputImageType* MOTION_owner();
    public: static InputImageType* MOTION;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MEDIA_IMAGE_INPUTIMAGETYPE_H_COMPLETE
        #if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListD.h>)
#include <org/allbinary/util/BasicArrayListD.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif

        #endif
    
