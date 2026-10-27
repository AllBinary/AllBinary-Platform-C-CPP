
        /* Generated Code Do Not Modify */
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class ScreenInfo
            : public Object
         {

    private: static ScreenInfo* instance() { static std::unique_ptr<ScreenInfo> value(new ScreenInfo()); return value.get(); }

    public: static ScreenInfo* getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ScreenInfo::instance();
    
}


    public: const int32_t SMALL_WIDTH = 320;

    public: const int32_t SMALL_HEIGHT = 240;

    public: const int32_t MEDIUM_WIDTH = 800;

    public: const int32_t MEDIUM_HEIGHT = 600;

};

            

