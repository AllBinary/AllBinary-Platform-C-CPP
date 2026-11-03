
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
        



        #ifndef ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H
        #define ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
class Displayable;
class MIDlet;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/view/EmulatorViewInterface.h"

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class NullEmulatorView
            : public virtual Object
        , public virtual EmulatorViewInterface {

    private: static NullEmulatorView* NULL_EMULATOR_VIEW_owner();
    public: static NullEmulatorView* NULL_EMULATOR_VIEW;


            
    public: NullEmulatorView();
        
    public: void setMidlet(MIDlet* midlet);

    public: void onEmulatorInitComplete(Object* midletActivity);
    public: void onEmulatorInitComplete(const std::string& midletActivity) { return onEmulatorInitComplete(JavaString::box(midletActivity)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void onEmulatorInitComplete(BoxValue midletActivity) { return onEmulatorInitComplete(JavaBoxes::toObject(midletActivity)); }

    public: void onSetDisplayable(Displayable* displayable);

};

            


        #endif //ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H_COMPLETE)
        #define ORG_ALLBINARY_VIEW_NULLEMULATORVIEW_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif
#if __has_include("org/allbinary/view/EmulatorViewInterface.h")
#include "org/allbinary/view/EmulatorViewInterface.h"
#endif

        #endif
    
