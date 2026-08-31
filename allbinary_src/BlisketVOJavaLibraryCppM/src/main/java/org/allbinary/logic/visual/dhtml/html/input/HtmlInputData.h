
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H
        #define ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H

            #include "../../../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class HtmlInputData
            : public Object
         {
        

    private: static const instance: HtmlInputData = new HtmlInputData();

    public static HtmlInputData getInstance();

    public const TEXT: string = "text";

    public const RADIO: string = "radio";

    public const CHECKBOX: string = "checkbox";

    public const HIDDEN: string = "hidden";

    public const IMAGE: string = "image";

    public const PASSWORD: string = "password";

    public const RESET: string = "reset";

    public const SUBMIT: string = "submit";

    public const TYPES: std::vector<string> = 
                                                        [
                                                            this.TEXT,this.RADIO,this.CHECKBOX,this.HIDDEN,this.IMAGE,this.PASSWORD,this.RADIO,this.RESET,this.SUBMIT
                                                        ];

};

            


        #endif //ORG_ALLBINARY_LOGIC_VISUAL_DHTML_HTML_INPUT_HTMLINPUTDATA_H
