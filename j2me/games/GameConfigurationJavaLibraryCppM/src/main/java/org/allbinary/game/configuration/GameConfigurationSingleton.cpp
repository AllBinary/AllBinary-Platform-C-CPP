
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
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "GameConfiguration.h"

class GameConfigurationSingleton
            : public Object
         {

    private: static GameConfigurationSingleton SINGLETON = GameConfigurationSingleton();

    public: static GameConfigurationSingleton getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return GameConfigurationSingleton::SINGLETON;
    
}


    private: BasicArrayList list;

    private: Hashtable<any, any> hashtable;

private: GameConfigurationSingleton(){
this->list= BasicArrayListD();
    
this->hashtable= Hashtable<any, any>();
    
}


    public: GameConfiguration getInstanceByName(std::string name){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable.get(name) as GameConfiguration;
    
}


    public: BasicArrayList getOptionsBasicArrayList(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->list;
    
}


    public: void add(GameConfiguration gameConfiguration){
this->list.add(gameConfiguration);
    
}


    public: Hashtable<any, any> getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


};

            

