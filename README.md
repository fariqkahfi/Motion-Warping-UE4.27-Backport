# Motion Warping UE4.27 Backport

An unofficial backport of Unreal Engine 5's Motion Warping system to Unreal Engine 4.27.

This plugin allows you to dynamically warp root motion animations to align with dynamic targets. For example, it can be used to perfectly match a character's vaulting animation to obstacles of varying heights and distances, or seamlessly snap a character to an enemy during a melee attack.

## Features

*   **Translation Warping**: Dynamically warps root motion translation to match a specific world location (Target).
*   **Rotation Warping**: Warps the character's rotation to align perfectly with the target's rotation over the duration of the animation.
*   **Robust Skew Warping**: Employs mathematically stable local-space projection to guarantee a perfect hit on the target, without causing extreme sideways oscillation when root motion axes are near zero.

## Installation

1. Copy the `MotionWarping` folder into your project's `Plugins/` directory.
2. Regenerate your project's Visual Studio solution files (right-click your `.uproject` file and select "Generate Visual Studio project files").
3. Compile your project.
4. Open the Editor, navigate to **Edit > Plugins**, and ensure that the **Motion Warping** plugin is enabled.

## How it Works

The plugin utilizes a custom `AnimNotifyState` (`AnimNotifyState_MotionWarping`) placed on your animation montages. When the notify is triggered, the `MotionWarpingComponent` intercepts the character's root motion and mathematically bends the root motion path so that by the end of the notify window, the character perfectly reaches the specified Warp Target.

Warp Targets can be updated dynamically in Blueprint or C++ via the `MotionWarpingComponent`.
