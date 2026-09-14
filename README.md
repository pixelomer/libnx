> [!IMPORTANT]
> This fork contains AI-assisted changes. Most of the work was done by
> GPT-6 Astra. The produced code was not audited or verified by a human beyond
> running it and confirming that it works as expected. Human maintainability or
> readability was not a goal for this project.
>
> THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
> IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
> FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
> AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
> LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
> OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
> SOFTWARE.

> This fork contains the libnx runtime, filesystem and socket fixes used by [pixelomer/dotnet-runtime](https://github.com/pixelomer/dotnet-runtime). Build with `make -j8` using devkitPro/devkitA64; artifacts are in `nx/lib/`. The runtime builder stages these files in its own SDK overlay. For a manual system installation use the upstream `make install` procedure below.

# Nintendo Switch AArch64-only userland library.
Based on libctru.

![Build status](https://github.com/switchbrew/libnx/actions/workflows/build.yaml/badge.svg)

# Install instructions
See [Switchbrew](https://switchbrew.org/wiki/Setting_up_Development_Environment).
