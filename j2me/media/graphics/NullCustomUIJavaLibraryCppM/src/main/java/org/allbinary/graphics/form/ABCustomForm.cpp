
        /* Generated Code Do Not Modify */
        



            #include <vector>
        
            #include "../../../../java/lang/RuntimeException.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <javax/microedition/lcdui/Graphics.h>

      
#include <org/allbinary/graphics/color/BasicColor.h>

      
#include <org/allbinary/graphics/form/item/ABCustomItem.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "CustomScreen.h"

class ABCustomForm: public CustomScreen {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

public: ABCustomForm(std::string title, std::vector<ABCustomItem> items, BasicColor backgroundBasicColor, BasicColor foregroundBasicColor){
}


    public: std::vector<ABCustomItem> getAllitems(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return {};
    
}


    public: int32_t size(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void setSelectedIndex(int32_t index){
}


    public: int32_t getSelectedIndex(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return 0;
    
}


    public: void deleteAll(){
}


    public: void delete_(int32_t itemNum){
}


    public: int32_t append(ABCustomItem item){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return  -1;
    
}


    public: void insert(int32_t itemNum, ABCustomItem item){
}


    public: void set(int32_t itemNum, ABCustomItem item){
}


    public: ABCustomItem get(int32_t itemNum){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ABCustomItem::getNullInstance();;
    
}


    public: int32_t getWidth(){



                            throw RuntimeException();
                    
}


    public: void paint(Graphics graphics){
}


    public: std::string getTitle(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return StringUtil::getInstance().EMPTY_STRING;
    
}


};

            

