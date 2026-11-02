
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H
        #define ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H

        
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
        
                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class EmulatorViewInterface
            : public virtual Object
         {

    public: virtual void setMidlet(MIDlet* midlet) = 0;

    public: virtual void onEmulatorInitComplete(Object* midletActivity) = 0;
    public: void onEmulatorInitComplete(const std::string& midletActivity) { return onEmulatorInitComplete(JavaString::box(midletActivity)); }
    public: template<typename BoxValue, typename std::enable_if<std::is_arithmetic<BoxValue>::value, int>::type = 0> void onEmulatorInitComplete(BoxValue midletActivity) { return onEmulatorInitComplete(JavaBoxes::toObject(midletActivity)); }

    public: virtual void onSetDisplayable(Displayable* displayable) = 0;

};

            


        #endif //ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H_COMPLETE)
        #define ORG_ALLBINARY_VIEW_EMULATORVIEWINTERFACE_H_COMPLETE
        #if __has_include(<javax/microedition/lcdui/Displayable.h>)
#include <javax/microedition/lcdui/Displayable.h>
#endif
#if __has_include(<javax/microedition/midlet/MIDlet.h>)
#include <javax/microedition/midlet/MIDlet.h>
#endif

        #endif
    
