function resizeCanvas()
{
    const canvas = document.getElementById('CanvasElement');
    canvas.width = window.innerWidth;
    canvas.height = window.innerHeight;
}

resizeCanvas();
window.addEventListener('resize', resizeCanvas);