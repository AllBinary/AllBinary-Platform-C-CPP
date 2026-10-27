
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
        



        #ifndef ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
class BasicArrayList;
class BasicArrayListUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class TouchButtonFactory
            : public virtual Object
         {

    private: static TouchButtonFactory* SINGLETON_owner();
    private: static TouchButtonFactory* SINGLETON;

    public: static TouchButtonFactory* getInstance();

    private: BasicArrayList* LIST;

    private: BasicArrayList* list;

    private: BasicArrayList* savedList;

private: TouchButtonFactory();

    public: void defaultList();

    private: bool saved = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void toggle(bool save, BasicArrayList* list);

                //@Throws(Exception.constructor)
            
    public: void setList(BasicArrayList* list);

    /*protected*/ public: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H_COMPLETE)
        #define ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H_COMPLETE
        #if __has_include(<org/allbinary/util/BasicArrayList.h>)
#include <org/allbinary/util/BasicArrayList.h>
#endif
#if __has_include(<org/allbinary/util/BasicArrayListUtil.h>)
#include <org/allbinary/util/BasicArrayListUtil.h>
#endif

        #endif
    
