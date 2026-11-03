
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Node;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DisplayInBrowserContraints
            : public virtual Object
        , public virtual DisplayInBrowserContraintsInterface {

    private: bool frameable= false;

    private: bool mountable= false;

    private: bool quickFrameable= false;

    private: std::string mountedLink;

public: DisplayInBrowserContraints(Node* node);

    public: bool isMountable();

    public: void setMountable(bool mountable);

    public: bool isFrameable();

    public: void setFrameable(bool frameable);

    public: bool isQuickFrameable();

    public: void setQuickFrameable(bool quickFrameable);

    public: std::string getMountedLink();

    public: void setMountedLink(std::string mountedLink);

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTS_H_COMPLETE
        #if __has_include(<org/w3c/dom/Node.h>)
#include <org/w3c/dom/Node.h>
#endif
#if __has_include("org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h")
#include "org/allbinary/logic/control/contraints/display/browser/DisplayInBrowserContraintsInterface.h"
#endif

        #endif
    
