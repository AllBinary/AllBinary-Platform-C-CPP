
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

            #include "../../../../../java/lang/Object.h"
        
            #include "../../../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class TouchButtonFactory
            : public Object
         {
        

    private: static const SINGLETON: TouchButtonFactory = new TouchButtonFactory();

    public static TouchButtonFactory getInstance();

    private: LIST: BasicArrayList = BasicArrayListUtil.getInstance()!.getImmutableInstance()!;

    private: list: BasicArrayList = this.LIST;

    private: savedList: BasicArrayList = this.LIST;

private constructor ();

    public defaultList();

    private: saved: bool = false;
//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public toggle(bool save, BasicArrayList list);

                //@Throws(Exception.constructor)
            
    public setList(BasicArrayList list);

    BasicArrayList getList();

};

            


        #endif //ORG_ALLBINARY_INPUT_MOTION_BUTTON_TOUCHBUTTONFACTORY_H
