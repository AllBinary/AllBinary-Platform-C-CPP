
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Feature.h"

class MainFeatureFactory
            : public Object
         {

    private: static MainFeatureFactory instance() { return MainFeatureFactory(); }

    public: static MainFeatureFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return MainFeatureFactory::instance();
    
}


    public: const Feature FULL_SCREEN = Feature("Full Screen");

    public: const Feature TITLE_BAR = Feature("Title Bar");

    public: const Feature STATIC = Feature("Static Dependent Feature");

    public: const Feature LOAD_ONDEMAND = Feature("Load OnDemand");

    public: const Feature LOAD_ALL = Feature("Load All");

};

            

