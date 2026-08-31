
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
        



            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Feature
            : public Object
         {
        

    private: static hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    public static Feature getInstance(string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Feature.hashtable.get(name) as Feature;
    
}


    static add(string name, Feature gameFeature){
Feature.hashtable.put(name, gameFeature);
    
}


    private: const name: string;

public constructor (string name){

            super();
        this.name= name;
    
Feature.add(name, this);
    
ChangedGameFeatureListener.getInstance()!.add(this);
    
}


    public string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.getName();;
    
}


    public string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.name;
    
}


};

            

