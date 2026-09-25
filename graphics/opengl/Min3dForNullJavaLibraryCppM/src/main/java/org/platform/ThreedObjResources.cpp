
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



            #include "../../java/lang/Object.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ThreedObjResources
            : public Object
         {

    private: static ThreedObjResources instance() { return ThreedObjResources(); }

    public: static ThreedObjResources getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ThreedObjResources::instance();
    
}


    public: const Hashtable<any, any> hashtable = StdUtil::getInstance().createHashtable();

    public: std::string get(std::string resourceName){

    std::string resourceName2 = this->hashtable.get(resourceName) as string;;
    

                        if(true)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resourceName2;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return resourceName;
    
}


};

            

