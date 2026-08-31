
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "BasicColor.h"
#include "BasicColorFactory.h"

class BasicColorCacheFactory
            : public Object
         {
        

    private: static const instance: BasicColorCacheFactory = new BasicColorCacheFactory();

    public static BasicColorCacheFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return BasicColorCacheFactory.instance;
    
}


    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

private constructor (){

            super();
        }


    public add(BasicColor basicDefaultColor){
this.hashtable.put(new Integer(basicDefaultColor!.intValue()), basicDefaultColor);
    
}

//@Synchronized //TWB - This is not allowed for CPP native. Instead use Coroutine logic instead.

    public BasicColor getAndOrCreate(Integer integer){

    basicColor: BasicColor = this.hashtable.get(integer) as BasicColor;;
    

                        if(basicColor == 
                                    null
                                )
                        
                                    {
                                    basicColor= BasicColorFactory.getInstance()!.createInstance(integer.intValue());
    
this.hashtable.put(integer, basicColor);
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return basicColor;
    
}


};

            

