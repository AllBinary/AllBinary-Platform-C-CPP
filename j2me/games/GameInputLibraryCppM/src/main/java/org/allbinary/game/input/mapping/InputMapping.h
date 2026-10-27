
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class Input;
class LogUtil;
class StringMaker;
class StringUtil;
class CommonLabels;
class CommonStrings;
class BasicArrayList;
class BasicArrayListD;
class StdUtil;
#include <org/allbinary/util/ABHashtable.h>
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        class InputToGameKeyMapping;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class InputMapping
            : public virtual Object
         {

    /*protected*/ public: LogUtil* logUtil;

    /*protected*/ public: CommonStrings* commonStrings;

    private: ABHashtable<Object*, Object*>* hashtable;

    private: BasicArrayList* mappedList;

/*protected*/ public: InputMapping();

    public: int32_t getTotalMapped();

    /*protected*/ public: bool isDefaultNew();

    /*protected*/ public: InputToGameKeyMapping* getDefault();

    /*protected*/ public: void removeAll();

    public: void remove(Input* input, Input* mappedToInput);

                //@Throws(Exception.constructor)
            
    public: void addMapping(InputToGameKeyMapping* inputToGameKeyMapping);

    public: void add(Input* input, Input* mappedToInput);

    public: bool isMapped(Input* input);

    public: BasicArrayList* getMappedInput(Input* id);

    public: ABHashtable<Object*, Object*>* getHashtable();

};

            


        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H_COMPLETE)
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_H_COMPLETE
        #if __has_include(<org/allbinary/game/input/Input.h>)
#include <org/allbinary/game/input/Input.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringMaker.h>)
#include <org/allbinary/logic/string/StringMaker.h>
#endif
#if __has_include(<org/allbinary/logic/string/StringUtil.h>)
#include <org/allbinary/logic/string/StringUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonLabels.h>)
#include <org/allbinary/string/CommonLabels.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
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
#if __has_include(<org/allbinary/util/ABHashtable.h>)
#include <org/allbinary/util/ABHashtable.h>
#endif
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

        #endif
    
