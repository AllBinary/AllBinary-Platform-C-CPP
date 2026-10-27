
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

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonFactory
            : public Object
         {

    private: static TouchButtonFactory* SINGLETON() { static std::unique_ptr<TouchButtonFactory> value(new TouchButtonFactory()); return value.get(); }

    public: static TouchButtonFactory* getInstance();

    private: BasicArrayList* LIST = BasicArrayListUtil::getInstance()->getImmutableInstance();

    private: BasicArrayList* list = this->LIST;

    private: BasicArrayList* savedList = this->LIST;

private: TouchButtonFactory();

    public: void defaultList();

    private: bool saved = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public: void toggle(bool save, BasicArrayList* list);

                //@Throws(Exception.constructor)
            
    public: void setList(BasicArrayList* list);

    protected: BasicArrayList* getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H
