
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
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "TenderType.h"

class TenderTypeFactory
            : public Object
         {

    private: static TenderTypeFactory instance() { return TenderTypeFactory(); }

    public: static TenderTypeFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return TenderTypeFactory::instance();
    
}


    public: const TenderType CREDITCARD = TenderType("Credit Card");

    public: const TenderType CHECK = TenderType("Check");

    public: const TenderType ACH = TenderType("Ach");

};

            

