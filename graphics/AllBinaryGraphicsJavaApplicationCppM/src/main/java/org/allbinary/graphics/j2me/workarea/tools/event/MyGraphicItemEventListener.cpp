
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
        



            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/workarea/tools/event/MyGraphicItemEvent.h"

class MyGraphicItemEventListener {

    public: virtual void delete_(MyGraphicItemEvent* evt) = 0;

                //@Throws(Exception.constructor)
            
    public: virtual void duplicate(MyGraphicItemEvent* evt) = 0;

    public: virtual void rotate(MyGraphicItemEvent* evt) = 0;

    public: virtual void highlight(MyGraphicItemEvent* evt) = 0;

    public: virtual void deselect(MyGraphicItemEvent* evt) = 0;

};

            

