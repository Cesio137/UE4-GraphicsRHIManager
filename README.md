# UE4-GraphicsRHIManager

This repository has been archived. Link to new version: https://github.com/Cesio137/GConfigManager

Plugin to toggle between DX11, DX12 and VULKAN in game.

Warning: It's work only for windows plataform. This plugin was compiled for UE 4.27 but can be recompiled for previous version of the engine.


## Sponsor me

<p align="center">
  <a href="https://www.paypal.com/donate?hosted_button_id=L48BPZ4VVCN6Q"><img src="https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif"></a>
</p>
<p align="center">
  <a href="https://nubank.com.br/pagar/1bcou4/5D6eezlHdm"><img src="https://logodownload.org/wp-content/uploads/2020/02/pix-bc-logo.png" width="128"></a>
</p>

### Bug Reporting Template:
```
**Detailed description of issue**
Write a detailed explanation of the issue here.

**Steps To Reproduce:**
1: Detailed Steps to reproduce the issue 
2: Clear steps
3: Etc

**Expected Results:**
A description of what should happen.

**Actual Results:**
A description of what actually happens.
```

# Setting Up Your Project
- Clone the repository or download the latest release.
- Create a C++ empty class if your project is blueprint based
- Extract/Move `RHIManager` folder into your project's `Plugin` folder
- Don't forget to check vulkan box inside `Projects Settings/Plataform/Windows` to use this API.
- Now search by `SetGraphicsRHI` to toggle default RHI, also search by `GetCurrentGraphicsRHI` to get the current Graphics RHI
