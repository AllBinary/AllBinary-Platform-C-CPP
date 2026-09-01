
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
        



            #include <vector>
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "AbeClientInformation.h"

class StoreAppClientInformation: public AbeClientInformation, public LongArrayIdentifierInterface {

    private: std::vector<int64_t> longArrayIdentifier;

public: StoreAppClientInformation(std::string name, std::string version, std::string specialName, std::string shortName, std::vector<int64_t> longArrayIdentifier){
            super(name, version, specialName, shortName);
                    

                            //For kotlin this is before the body of the constructor.
                    
this->longArrayIdentifier= longArrayIdentifier;
    
}


    public: std::vector<int64_t> getLongArrayIdentifier(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->longArrayIdentifier;
    
}


};

            

