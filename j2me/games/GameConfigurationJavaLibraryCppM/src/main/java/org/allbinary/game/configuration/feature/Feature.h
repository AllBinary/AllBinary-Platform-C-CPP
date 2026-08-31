
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H

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

    public static Feature getInstance(string name);

    static add(string name, Feature gameFeature);

    private: const name: string;

public constructor (string name);

    public string toString();

    public string getName();

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_FEATURE_FEATURE_H
