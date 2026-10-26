
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
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "LicenseType.h"

class LicenseTypeFactory
            : public Object
         {

    private: static LicenseTypeFactory instance() { return LicenseTypeFactory(); }

    public: static LicenseTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LicenseTypeFactory::instance();
    
}


    public: const LicenseType UNKNOWN = LicenseType(CommonStrings::getInstance().UNKNOWN);

    public: const LicenseType DEMO = LicenseType("Demo");

    public: const LicenseType NORMAL = LicenseType("Normal");

    public: LicenseType getInstance(std::string name){

                        if(this->DEMO.getName().compareTo(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->DEMO;
    

                                    }
                                
                             else 
                        if(this->NORMAL.getName().compareTo(name) == 0)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->NORMAL;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->UNKNOWN;
    
}


};

            

