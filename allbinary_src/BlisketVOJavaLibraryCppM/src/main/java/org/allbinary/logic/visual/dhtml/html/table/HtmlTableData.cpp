
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
        



            #include "../../../../../../../java/lang/Object.h"
        
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlTableData
            : public Object
         {
        

    private: static const instance: HtmlTableData = new HtmlTableData();

    public static HtmlTableData getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return HtmlTableData.instance;
    
}


    public const LEFT: string = CommonStrings.getInstance()!.LEFT;

    public const RIGHT: string = CommonStrings.getInstance()!.RIGHT;

    public const NONE: string = "none";

    public const TOP: string = "top";

    public const BOTTOM: string = "bottom";

    public const TOPBOT: string = "topbot";

    public const SIDES: string = "sides";

    public const ALL: string = "all";

    public const BORDERED: string = "border";

    public const BASIC: string = "basic";

    public const ROWS: string = "rows";

    public const FRAMES: std::vector<string> = 
                                                        [
                                                            this.NONE,this.TOP,this.BOTTOM,this.TOPBOT,this.SIDES,this.ALL,this.BORDERED
                                                        ];

};

            

