
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_CPP
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraints.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"


DisplayInBrowserContraints::DisplayInBrowserContraints(Node* node){
}


    auto DisplayInBrowserContraints::isMountable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mountable;
    
}


    auto DisplayInBrowserContraints::setMountable(bool mountable) -> void{
this->mountable= mountable;
    
}


    auto DisplayInBrowserContraints::isFrameable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->frameable;
    
}


    auto DisplayInBrowserContraints::setFrameable(bool frameable) -> void{
this->frameable= frameable;
    
}


    auto DisplayInBrowserContraints::isQuickFrameable() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->quickFrameable;
    
}


    auto DisplayInBrowserContraints::setQuickFrameable(bool quickFrameable) -> void{
this->quickFrameable= quickFrameable;
    
}


    auto DisplayInBrowserContraints::getMountedLink() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->mountedLink;
    
}


    auto DisplayInBrowserContraints::setMountedLink(std::string mountedLink) -> void{
this->mountedLink= mountedLink;
    
}




        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_CPP
