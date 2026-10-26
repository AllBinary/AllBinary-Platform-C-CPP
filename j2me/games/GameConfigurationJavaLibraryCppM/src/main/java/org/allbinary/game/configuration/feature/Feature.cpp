
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
        



            #include "java/lang/Object.h"
        
#include <org/allbinary/game/configuration/event/ChangedGameFeatureListener.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class Feature
            : public Object
         {

    private: static ABHashtable<Object*, Object*> hashtable = StdUtil::getInstance().createHashtable();

    public: static Feature getInstance(std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Feature::hashtable.get(name);
    
}


    private: static void add(std::string name, Feature gameFeature){
Feature::hashtable.put(name, gameFeature);
    
}


    private: std::string name;

public: Feature(std::string name){
this->name= name;
    
Feature::add(name, this);
    
ChangedGameFeatureListener::getInstance().add(this);
    
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getName();;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


};

            

