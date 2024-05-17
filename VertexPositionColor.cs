using System.Numerics;
using System.Runtime.InteropServices;

namespace CSharpBlazorWebGPUExample
{
    [StructLayout(LayoutKind.Sequential, Pack = 4)]
    public readonly struct VertexPositionColor
    {
        public static unsafe readonly int SizeInBytes = sizeof(VertexPositionColor);

        public VertexPositionColor(in Vector3 position, in Vector4 color)
        {
            Position = position;
            Color = color;
        }

        public readonly Vector3 Position;
        public readonly Vector4 Color;
    }
}
