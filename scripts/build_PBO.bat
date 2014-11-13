SET TOOL_DIR="C:\Games\Steam\steamapps\common\Arma 3 Tools\"
SET CONTENT_DIR="C:\Users\Anton\Documents\SourceTree\A3_NoRadar"

%TOOL_DIR%\AddonBuilder\AddonBuilder.exe %CONTENT_DIR%\src\@NoRadar\addons\NoRadar %CONTENT_DIR%\bin\@NoRadar\addons -sign="..\..\..\..\Dropbox\Arma3\NoRadar_1_0_0.biprivatekey" -packonly -clear > build_PBO_out.txt
pause