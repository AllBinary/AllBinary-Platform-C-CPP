
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
        



        #ifndef ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class DisplayInBrowserContraintsInterface
            : public virtual Object
         {

    public: virtual bool isMountable() = 0;

    public: virtual bool isFrameable() = 0;

    public: virtual bool isQuickFrameable() = 0;

    public: virtual void setMountable(bool canBeMounted) = 0;

    public: virtual void setFrameable(bool canBeFramed) = 0;

    public: virtual void setQuickFrameable(bool canBeQuickFramed) = 0;

    public: virtual void setMountedLink(std::string mountedLink) = 0;

    public: virtual std::string getMountedLink() = 0;

};

            


        #endif //ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_LOGIC_CONTROL_CONTRAINTS_DISPLAY_BROWSER_DISPLAYINBROWSERCONTRAINTSINTERFACE_H_COMPLETE
        
        #endif
    
